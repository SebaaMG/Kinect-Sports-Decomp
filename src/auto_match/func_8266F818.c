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
extern int fn_8263C538();
extern int fn_8265C9E0();
extern int fn_8267A0E0();
extern int fn_82F65E20();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C40;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_8c;


void fn_8266F818(int param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  undefined4 uStack_8c;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  dVar7 = (double)(**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
  uStack_8c = (undefined4)(longlong)dVar7;
  uVar1 = uStack_8c;
  uVar6 = (longlong)dVar7 & 0xffffffff;
  dVar7 = (double)(**(code **)(**(int **)(param_1 + 0xc) + 0x1c))();
  uStack_8c = (undefined4)(longlong)dVar7;
  uVar5 = (longlong)dVar7 & 0xffffffff;
  if ((uVar6 != 0) && (uVar5 != 0)) {
    if ((int)param_2 < 1) {
      uVar4 = uVar6;
      if (uVar5 <= uVar6) {
        uVar4 = uVar5;
      }
      dVar7 = (double)fn_82F65E20((double)uVar4);
      dVar8 = (double)(float)dVar7;
      dVar7 = (double)fn_82F65E20(lbl_82002C40);
      uVar4 = (longlong)(dVar8 / (double)(float)dVar7) & 0xffffffff;
      param_2 = uVar4 - 4;
      if (uVar4 < 5) {
        param_2 = 1;
      }
    }
    puVar2 = (undefined4 *)fn_8265C9E0(0xc);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
    }
    *(undefined4 **)(param_1 + 0xb8) = puVar2;
    fn_8267A0E0(uVar6,uVar5,param_2,0,param_3);
    uVar3 = fn_8263C538(**(undefined4 **)(param_1 + 0xb8));
    *(undefined4 *)(param_1 + 0xd8) = uVar3;
    uVar3 = lbl_821AAD20;
    uStack_80 = uVar1;
    uStack_7c = uStack_8c;
    uStack_70 = uVar1;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_6c = uStack_8c;
    uStack_54 = lbl_82002AE0;
    uStack_50 = 0;
    uStack_58 = lbl_82002AE0;
    uStack_5c = 0;
    *(undefined4 *)(param_1 + 0xcc) = lbl_82002AE0;
    *(undefined4 *)(param_1 + 0xc4) = uVar1;
    *(undefined4 *)(param_1 + 0xd0) = uVar3;
    uStack_60 = 0;
    *(undefined4 *)(param_1 + 200) = uStack_8c;
    uStack_64 = 0;
    uStack_68 = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    (**(code **)(**(int **)(param_1 + 0x10) + 100))(*(int **)(param_1 + 0x10),&uStack_80);
  }
  return;
}

