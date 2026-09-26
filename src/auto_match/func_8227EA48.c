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
extern int fn_82275128();
extern int fn_8227EB10();
extern unsigned int lbl_821916FC;


void fn_8227EA48(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1[0xb] != -1) {
    puVar2 = *(undefined4 **)(param_1[0xb] * 4 + param_1[3]);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(puVar2[5],puVar2[3]);
    }
    puVar1 = (undefined4 *)puVar2[4];
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,puVar2[5]);
    }
    fn_8227EB10(param_1,0);
    (**(code **)(*param_1 + 0x18))(param_1);
    iVar3 = fn_82275128();
    if (*(float *)(iVar3 + 0xc) < lbl_821916FC) {
      *(float *)(iVar3 + 0xc) = lbl_821916FC;
    }
  }
  return;
}

