
//******************************************************************
// p_PROJECT_PRAGMA_MESSAGES.c
//******************************************************************

#ifdef NO //Doku

#endif //(NO //DOKU)

//********************************j
//* Defines

//* 01 Pragma messages Test
/* definition to expand macro then apply to pragma message */
#define VALUE_TO_STRING(x) #x
#define VALUE(x) VALUE_TO_STRING(x)
#define VAR_NAME_VALUE(var) #var " = "  VALUE(var)

#ifdef NO

//#pragma message "The value of ABC: " XSTR(ui32SysClock)
#undef MESSAGE_VAL
#define MESSAGE_VAL 2334
#undef MESSAGE_STR
#define MESSAGE_STR "Test AB24"
#pragma message("*** " MESSAGE_STR "   " VAR_NAME_VALUE(MESSAGE_VAL))

#undef MESSAGE_VAL
#define MESSAGE_VAL 498549ff
#undef MESSAGE_STR
#define MESSAGE_STR "Test GD83443"
#pragma message("*** " MESSAGE_STR "   " VAR_NAME_VALUE(MESSAGE_VAL))

//#define MESSAGE0 #undef MESSAGE_VAL\#undef MESSAGE_STR
//#define MESSAGE1 pragma message("*** " MESSAGE_STR "   " VAR_NAME_VALUE(MESSAGE_VAL))

#endif



//********************************j
//* Functions

//********************************j
//* Variables

