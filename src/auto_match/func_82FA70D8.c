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
extern int fn_82FF4BB8();
extern unsigned int lbl_83264234;
extern unsigned int lbl_83264304;


void fn_82FA70D8(undefined8 param_1,int param_2,int param_3,ulonglong param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = lbl_83264234;
  while (piVar2 = piVar1, piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[0xf];
    iVar3 = (**(code **)(*piVar2 + 0x20))(piVar2);
    if ((iVar3 == param_2) &&
       (((param_3 == 0 || (*(int *)(piVar2[0xe] + 0x28) == param_3)) &&
        (iVar3 = (**(code **)(*piVar2 + 8))
                           (piVar2,(param_4 + (param_4 & 0x7fffffff) * 2 & 0xfffffff) << 4),
        iVar3 == 1)))) {
      fn_82FF4BB8(lbl_83264304,*(undefined4 *)(piVar2[0xe] + 0x20));
    }
  }
  return;
}

