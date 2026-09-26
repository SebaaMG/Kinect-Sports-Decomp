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
extern int fn_82FA5190();
extern int fn_82FF29A8();
extern int fn_82FF2B48();
extern int fn_82FF2E78();
extern int fn_82FF3ED8();
extern unsigned int lbl_831BC768;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


undefined8 fn_82FF3150(int *param_1,undefined8 param_2,int *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  char cVar5;
  int *piVar3;
  int iVar4;
  undefined4 *puVar7;
  longlong lVar6;
  undefined8 uVar8;
  int aiStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  float afStack_40 [16];
  
  uVar8 = 2;
  fn_82FF29A8(afStack_40,param_1,param_3[2],aiStack_50);
  cVar5 = fn_82FF2E78((double)afStack_40[0]);
  if (cVar5 == '\0') {
    uVar8 = 3;
    lVar6 = (-(ulonglong)(*(char *)((int)param_3 + 0x81) != '\0') & 0xfffffffe) + 0x22;
  }
  else {
    cVar5 = (**(code **)(*param_1 + 0x74))((double)afStack_40[0],param_1);
    if (cVar5 == '\0') {
      fn_82FF3ED8(param_1,(-(ulonglong)(*(char *)((int)param_3 + 0x81) != '\0') & 0xfffffffe) +
                           0x21,*(undefined4 *)(param_3[2] + 0x58),param_3 + 4,param_3 + 10);
      (**(code **)(*param_1 + 0x78))(param_1,param_3[2],3,0);
      return 3;
    }
    piVar3 = (int *)(**(code **)(*(int *)param_3[1] + 0x10))
                              ((int *)param_3[1],param_1,param_2,param_3,afStack_40);
    if (piVar3 == (int *)0x0) {
      (**(code **)(*param_1 + 0x78))(param_1,param_3[2],3,0);
    }
    else {
      if (*param_3 == 0) {
        puVar7 = &uStack_48;
        uStack_48 = 0;
        uStack_44 = 0;
        pcVar1 = *(code **)(*piVar3 + 4);
      }
      else {
        pcVar1 = *(code **)(*piVar3 + 4);
        puVar7 = *(undefined4 **)(param_3[0x1e] + 8);
      }
      iVar4 = (*pcVar1)(piVar3,puVar7);
      if (iVar4 == 1) {
        piVar3[0x50] = aiStack_50[0];
        piVar3[0x4d] = param_3[0x1d];
        fn_82FF2B48(piVar3,param_3[3],param_3[0x1c]);
        return 1;
      }
      (**(code **)(*piVar3 + 8))(piVar3,1);
      uVar2 = lbl_831BC768;
      (**(code **)*piVar3)(piVar3,0);
      fn_82FA5190(uVar2,piVar3);
    }
    lVar6 = (ulonglong)(*(char *)((int)param_3 + 0x81) == '\0') + 0x1d;
  }
  fn_82FF3ED8(param_1,lVar6,*(undefined4 *)(param_3[2] + 0x58),param_3 + 4,param_3 + 10);
  return uVar8;
}

