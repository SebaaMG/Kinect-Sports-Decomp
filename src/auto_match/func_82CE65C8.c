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
extern unsigned int *auStack_1f;
extern int fn_82CE4EC0();
extern int fn_82CE5FE0();
extern unsigned int uStack_20;


undefined1 * fn_82CE65C8(undefined1 *param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined1 uStack_20;
  undefined1 auStack_1f [7];
  
  pcVar1 = (char *)fn_82CE4EC0(&uStack_20,param_2 + 0x30);
  if (*pcVar1 != '\0') {
    pcVar1 = (char *)fn_82CE5FE0(auStack_1f,param_2);
    uVar2 = 1;
    if (*pcVar1 != '\0') goto LAB_82ce661c;
  }
  uVar2 = 0;
LAB_82ce661c:
  *param_1 = uVar2;
  return param_1;
}

