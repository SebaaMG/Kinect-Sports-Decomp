typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern unsigned int lbl_82194E06;


/* WARNING: Removing unreachable block (ram,0x823cc798) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_823DE598(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x823cc2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(lbl_82194E06 + 0x823cc2d8))(*(undefined4 *)(*(int *)(param_1 + 8) + 0x4b8));
  return;
}

