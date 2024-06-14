/*
 * Generated by ./misc/optlib2c from optlib/nix.ctags, Don't edit this manually.
 */
#include "general.h"
#include "parse.h"
#include "routines.h"
#include "field.h"
#include "xtag.h"


static void initializeNixParser (const langType language CTAGS_ATTR_UNUSED)
{
}

extern parserDefinition* NixParser (void)
{
	static const char *const extensions [] = {
		"nix",
		NULL
	};

	static const char *const aliases [] = {
		NULL
	};

	static const char *const patterns [] = {
		NULL
	};

	static kindDefinition NixKindTable [] = {
		{
		  true, 'p', "package", "package definition",
		},
		{
		  true, 'f', "function", "function definition",
		},
		{
		  true, 'a', "attr", "attribute definition",
		},
	};
	static tagRegexTable NixTagRegexTable [] = {
		{"p?name\\s*=\\s*\"(\\w+)\"", "\\1",
		"p", NULL, NULL, false},
		{"(\\S+)\\s*=\\s+\\w+:", "\\1",
		"f", NULL, NULL, false},
		{"\\s+([a-zA-Z_0-9-]+)\\s*=", "\\1",
		"a", NULL, NULL, false},
	};


	parserDefinition* const def = parserNew ("Nix");

	def->versionCurrent= 0;
	def->versionAge    = 0;
	def->enabled       = true;
	def->extensions    = extensions;
	def->patterns      = patterns;
	def->aliases       = aliases;
	def->method        = METHOD_NOT_CRAFTED|METHOD_REGEX;
	def->kindTable     = NixKindTable;
	def->kindCount     = ARRAY_SIZE(NixKindTable);
	def->tagRegexTable = NixTagRegexTable;
	def->tagRegexCount = ARRAY_SIZE(NixTagRegexTable);
	def->initialize    = initializeNixParser;

	return def;
}