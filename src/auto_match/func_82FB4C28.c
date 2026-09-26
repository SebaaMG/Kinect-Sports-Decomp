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
extern int fn_82FA9050();
extern int fn_82FA9208();
extern int fn_8300CA08();


void fn_82FB4C28(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  fn_82FA9050();
  if (*(int *)(param_1 + 0x60) != 0) {
    for (puVar1 = *(undefined4 **)(param_1 + 0x50); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      iVar2 = puVar1[1];
      *(undefined1 *)(iVar2 + 0x44) = 0;
      *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) & 0x7fffffff;
      iVar3 = *(int *)(iVar2 + 0x1c);
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      if (iVar3 != 0) {
        fn_82FA9208();
      }
    }
  }
  fn_8300CA08(param_1 + 0x3c);
  if (*(char *)(param_1 + 0x74) != '\0') {
    *(undefined1 *)(param_1 + 0x74) = 0;
    fn_82FA9208(param_1 + -4);
  }
  return;
}

