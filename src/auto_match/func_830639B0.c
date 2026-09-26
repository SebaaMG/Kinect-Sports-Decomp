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
extern int fn_8305ED48();
extern int fn_8305F320();
extern int fn_83066810();
extern unsigned int lbl_8217E8A0;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


void fn_830639B0(int param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  undefined **ppuStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  fn_8305ED48(param_3,param_2 + 0x10,param_4,param_5);
  uStack_2c = (uint)param_2;
  ppuStack_30 = &lbl_8217E8A0;
  uStack_28 = uStack_2c;
  while( true ) {
    uStack_28 = (*(code *)ppuStack_30[1])(&ppuStack_30,param_2);
    if (uStack_28 == 0) break;
    bVar1 = *(int *)(uStack_28 + 0x30) == (int)param_2;
    iVar2 = fn_83066810((double)*(float *)(param_1 + 0x30),uStack_28 + 0x10,param_3);
    if (iVar2 == 3) {
      fn_8305F320((double)*(float *)(param_1 + 0x30),param_3,(ulonglong)uStack_28 + 0x10,
                        -(ulonglong)!bVar1 & param_3,-(ulonglong)bVar1 & param_3);
    }
    param_2 = (ulonglong)uStack_28;
  }
  return;
}

