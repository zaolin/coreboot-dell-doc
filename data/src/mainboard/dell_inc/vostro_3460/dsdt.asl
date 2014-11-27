DefinitionBlock(
	"dsdt.aml",
	"DSDT",
	0x03,		// DSDT revision: ACPI v3.0
	"COREv4",	// OEM id
	"COREBOOT",	// OEM table id
	0x20141018	// OEM revision
)
{
	// Some generic macros
	#include "acpi/platform.asl"
	#include <cpu/intel/model_206ax/acpi/cpu.asl>

	Scope (\_SB) {
		Device (PCI0)
		{
		#include <northbridge/intel/sandybridge/acpi/sandybridge.asl>
		}
	}
}
