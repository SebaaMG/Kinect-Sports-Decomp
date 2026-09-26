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
extern unsigned int *auStack_30;
extern int fn_82CEAF18();
extern int fn_82CEAF20();
extern int fn_82CEEC58();


undefined1 * fn_82CEED70(undefined1 *param_1,undefined8 param_2)

{
  int iVar2;
  undefined8 uVar1;
  char *pcVar3;
  longlong lVar4;
  undefined1 auStack_30 [48];
  
  iVar2 = fn_82CEAF18(param_2);
  lVar4 = 0;
  if (0 < iVar2) {
    do {
      uVar1 = fn_82CEAF20(param_2,lVar4);
      pcVar3 = (char *)fn_82CEEC58(auStack_30,uVar1);
      if (*pcVar3 == '\0') {
        *param_1 = 0;
        return param_1;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < iVar2);
  }
  *param_1 = 1;
  return param_1;
}

