/*
 * Automatically generated by SheenBidiGenerator tool.
 * DO NOT EDIT!!
 */

#ifndef _SB_INTERNAL_PAIRING_LOOKUP_H
#define _SB_INTERNAL_PAIRING_LOOKUP_H

#include <SBConfig.h>

#include "SBBase.h"
#include "SBBracketType.h"

SB_INTERNAL SBCodepoint SBPairingDetermineMirror(SBCodepoint codepoint);
SB_INTERNAL SBCodepoint SBPairingDetermineBracketPair(SBCodepoint codepoint, SBBracketType *bracketType);

#endif