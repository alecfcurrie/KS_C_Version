import re

def generate_event_files(header_file, output_directory="."):
    """
    Generates .event files from a C header file containing enums.
    Handles enums without explicit value assignments.

    Args:
        header_file: Path to the C header file.
        output_directory: Directory to write the generated .event files.
    """

    with open(header_file, "r") as f:
        header_content = f.read()

    enum_regex = re.compile(r"enum\s+(\w+)\s*\{([^}]*)\};", re.DOTALL)
    enum_matches = enum_regex.findall(header_content)
    
    generated_files = []

    for enum_name, enum_body in enum_matches:
        event_file_name = f"{enum_name}.event"
        event_file_path = f"{output_directory}/{event_file_name}"
        generated_files.append(event_file_name)

        # Remove comments before processing enum values
        enum_body = re.sub(r"//.*", "", enum_body)

        enum_values = re.findall(r"(\w+)(?:\s*=\s*(0x[0-9A-Fa-f]+))?", enum_body)

        with open(event_file_path, "w") as event_file:
            value = 0  # Initialize value counter
            for value_name, value_hex in enum_values:
                if value_hex:
                    value = int(value_hex, 16)  # Use provided hex value
                event_file.write(f"#define {value_name} 0x{value:02X}\n")
                value += 1  # Increment for the next value

    # Generate the master installer file
    master_file_path = f"{output_directory}/MasterDefinitionInstaller.event"
    with open(master_file_path, "w") as master_file:
        for file_name in generated_files:
            master_file.write(f"#include \"{file_name}\"\n")

if __name__ == "__main__":
    header_file = "Definitions/KSDefinitions.h"  # Replace with your header file name
    output_directory = "Definitions"  # Replace with the desired output directory

    generate_event_files(header_file, output_directory)
    print("Event files generated successfully.")