#include <device/azalia_device.h>

const u32 cim_verb_data[] = {
	0x14f1506e, /* Codec Vendor / Device ID: Conexant */
	0x10280563, /* Subsystem ID */

	0x0000000b, /* Number of 4 dword sets */
	/* NID 0x01: Subsystem ID.  */
	AZALIA_SUBVENDOR(0x0, 0x10280563),

	/* NID 0x19: Subsystem ID.  */
	AZALIA_PIN_CFG(0x0, 0x19, 0x04211040),

	/* NID 0x1a: Subsystem ID.  */
	AZALIA_PIN_CFG(0x0, 0x1a, 0x04a11030),

	/* NID 0x1b: Subsystem ID.  */
	AZALIA_PIN_CFG(0x0, 0x1b, 0x400001f0),

	/* NID 0x1c: Subsystem ID.  */
	AZALIA_PIN_CFG(0x0, 0x1c, 0x400001f0),

	/* NID 0x1d: Subsystem ID.  */
	AZALIA_PIN_CFG(0x0, 0x1d, 0x400001f0),

	/* NID 0x1e: Subsystem ID.  */
	AZALIA_PIN_CFG(0x0, 0x1e, 0x400001f0),

	/* NID 0x1f: Subsystem ID.  */
	AZALIA_PIN_CFG(0x0, 0x1f, 0x92170110),

	/* NID 0x20: Subsystem ID.  */
	AZALIA_PIN_CFG(0x0, 0x20, 0x400001f0),

	/* NID 0x22: Subsystem ID.  */
	AZALIA_PIN_CFG(0x0, 0x22, 0x400001f0),

	/* NID 0x23: Subsystem ID.  */
	AZALIA_PIN_CFG(0x0, 0x23, 0x95a60150),
	0x80862806, /* Codec Vendor / Device ID: Intel */
	0x80860101, /* Subsystem ID */

	0x00000004, /* Number of 4 dword sets */
	/* NID 0x01: Subsystem ID.  */
	AZALIA_SUBVENDOR(0x3, 0x80860101),

	/* NID 0x05: Subsystem ID.  */
	AZALIA_PIN_CFG(0x3, 0x05, 0x18560010),

	/* NID 0x06: Subsystem ID.  */
	AZALIA_PIN_CFG(0x3, 0x06, 0x58560020),

	/* NID 0x07: Subsystem ID.  */
	AZALIA_PIN_CFG(0x3, 0x07, 0x58560030),
};

const u32 pc_beep_verbs[0] = {};

AZALIA_ARRAY_SIZES;
