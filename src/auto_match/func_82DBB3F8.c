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
#define TBLr 0
extern int fn_82CE5410();
extern int fn_82DBBD28();
extern int fn_82DBBF60();
extern unsigned int lbl_8200571C;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_8323B4A0;


void fn_82DBB3F8(double param_1,double param_2,int *param_3,undefined8 param_4,undefined8 param_5,
                  int *param_6)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  int iVar6;
  undefined2 *puVar7;
  
  uVar5 = (**(code **)(*param_3 + 0x40))();
  if ((uVar5 & 0xffffffff) != 0) {
    (**(code **)(*param_6 + 0x18))(param_6);
    iVar6 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar6 + 4);
    if (puVar1 < *(undefined4 **)(iVar6 + 0xc)) {
      *puVar1 = "TtSetSoftContact";
      uVar2 = TBLr;
      puVar1[1] = (int)uVar2;
      *(undefined4 **)(iVar6 + 4) = puVar1 + 3;
    }
    iVar6 = fn_82DBBD28(uVar5,0x17);
    if (iVar6 == 0) {
      iVar6 = fn_82CE5410();
      puVar7 = (undefined2 *)
               (**(code **)(**(int **)(iVar6 + 0x10) + 4))(*(int **)(iVar6 + 0x10),0x30);
      if (puVar7 == (undefined2 *)0x0) {
        puVar7 = (undefined2 *)0x0;
      }
      else {
        *puVar7 = 0x17;
        uVar4 = lbl_82186E6C;
        puVar7[8] = 0x30;
        uVar3 = lbl_8200571C;
        *(undefined4 *)(puVar7 + 0x10) = uVar4;
        *(undefined4 *)(puVar7 + 0x12) = uVar3;
      }
      *(float *)(puVar7 + 0x10) = (float)param_1;
      *(float *)(puVar7 + 0x12) = (float)param_2;
      fn_82DBBF60(uVar5,param_6);
    }
    else {
      *(float *)(iVar6 + 0x20) = (float)param_1;
      *(float *)(iVar6 + 0x24) = (float)param_2;
    }
    iVar6 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar6 + 4);
    if (puVar1 < *(undefined4 **)(iVar6 + 0xc)) {
      *puVar1 = &lbl_82132BC4;
      uVar2 = TBLr;
      puVar1[1] = (int)uVar2;
      *(undefined4 **)(iVar6 + 4) = puVar1 + 3;
    }
  }
  return;
}

