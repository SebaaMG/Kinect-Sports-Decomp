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
extern int fn_82292780();
extern int fn_82864898();
extern unsigned int *lbl_8327F864;
extern unsigned int *lbl_8327F868;
extern unsigned int uRam8326af50;


void fn_82535EB8(char param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_30 [48];
  
  if (param_1 == '\0') {
    uVar2 = (ulonglong)uRam8326af50 + 0x24;
  }
  else {
    uVar2 = (ulonglong)uRam8326af50;
  }
  fn_82292780(auStack_30,uVar2);
  iVar1 = (**(code **)(*lbl_8327F864 + 0xc))(lbl_8327F864,auStack_30);
  if (iVar1 < 0) {
    (**(code **)(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,0x524,0xffffffff821c3d28);
  }
  fn_82864898(auStack_30);
  return;
}

