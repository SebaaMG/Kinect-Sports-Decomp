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
extern int fn_8223F5A0();
extern int fn_82F62680();
extern int fn_82F626D0();
extern int fn_82F641F8();


void fn_82F62870(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_30 [48];
  
  fn_82F62680(auStack_30,0);
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 != 0) {
    iVar4 = iVar3 << 2;
    do {
      iVar4 = iVar4 + -4;
      iVar3 = iVar3 + -1;
      iVar1 = *(int *)(*(int *)(param_1 + 8) + iVar4);
      if ((iVar1 != 0) &&
         (puVar2 = (undefined4 *)fn_8223F5A0(iVar1), puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(puVar2,1);
      }
    } while (iVar3 != 0);
  }
  fn_82F641F8(*(undefined4 *)(param_1 + 8));
  fn_82F626D0(auStack_30);
  return;
}

