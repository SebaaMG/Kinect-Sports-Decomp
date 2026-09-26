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
extern unsigned int *auStack_5c;
extern unsigned int fStack_60;
extern int fn_822315A0();
extern int fn_828D3C88();
extern int fn_82F68CC0();
extern unsigned int iStack_68;
extern unsigned int iStack_6c;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_38;
extern unsigned int uStack_64;
extern unsigned int uStack_70;


undefined8
fn_828D3D70(double param_1,int param_2,int param_3,int param_4,int param_5,undefined8 param_6,
             undefined8 param_7,undefined8 *param_8,undefined8 param_9)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  float fStack_60;
  undefined1 auStack_5c [36];
  undefined8 uStack_38;
  undefined1 auStack_30 [48];
  
  if (param_4 == 0) {
    bVar1 = false;
    for (iVar2 = *(int *)(param_2 + 0x14); iVar2 != *(int *)(param_2 + 0x18); iVar2 = iVar2 + 0x50)
    {
      if (*(int *)(iVar2 + 8) == param_5) {
        bVar1 = true;
      }
    }
    if (!bVar1) {
      uStack_70 = 0;
      iStack_6c = 0;
      uStack_64 = 0;
      fStack_60 = lbl_821AAD20;
      iStack_68 = param_5;
      fn_82F68CC0(auStack_5c,param_7,0x24);
      uStack_38 = *param_8;
      fn_82F68CC0(auStack_30,param_9,0x10);
      fn_828D3C88(param_2 + 0x14,&uStack_70);
      if (iStack_6c != 0) {
        fn_822315A0();
      }
    }
  }
  else if (param_4 == 1) {
    for (piVar3 = *(int **)(param_2 + 4); piVar3 != *(int **)(param_2 + 8); piVar3 = piVar3 + 5) {
      if (*piVar3 == param_3) {
        iVar2 = piVar3[1];
        while( true ) {
          if (iVar2 == piVar3[2]) {
            return 1;
          }
          if (*(int *)(iVar2 + 8) == param_5) break;
          iVar2 = iVar2 + 0x50;
        }
        if ((double)lbl_821AAD20 < param_1) {
          *(float *)(iVar2 + 0x10) = (float)param_1;
          *(undefined4 *)(iVar2 + 0xc) = 2;
          return 1;
        }
        *(undefined4 *)(iVar2 + 0xc) = 3;
        return 1;
      }
    }
  }
  return 1;
}

