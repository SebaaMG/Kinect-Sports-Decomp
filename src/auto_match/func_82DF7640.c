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
extern int fn_82BA02A8();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA220();
extern int fn_82CEA4B8();
extern int fn_82CEAB00();
extern int fn_82DF3CE0();
extern int fn_82DF6F28();
extern int fn_83089E78();
extern unsigned int iStack_a8;
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;
extern unsigned int lbl_82144818;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;


void fn_82DF7640(undefined8 param_1,uint *param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int iStack_c0;
  int iStack_bc;
  uint uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  
  iVar5 = *(int *)(*param_2 + 8);
  uStack_b0 = 0;
  uStack_ac = 0;
  iStack_a8 = -1;
  iVar2 = fn_82CE5410();
  fn_82CEAB00(&uStack_b0,*(undefined4 *)(iVar2 + 0x10),param_3);
  if (0 < (int)param_3) {
    do {
      uVar1 = *param_2;
      iVar2 = fn_82CE5410();
      fn_82CEA160(&uStack_b0,*(undefined4 *)(iVar2 + 0x10),(ulonglong)uVar1 + 0x10,0);
      iStack_c0 = 0;
      iStack_bc = 0;
      uStack_b8 = 0x80000000;
      fn_83089E78((ulonglong)*param_2 + 0x10,&iStack_c0);
      iVar2 = 0;
      if (0 < iStack_bc) {
        iVar7 = 0;
        do {
          puVar8 = (undefined4 *)(iVar7 + iStack_c0);
          iVar3 = fn_82CEA220(&uStack_b0,puVar8[1]);
          if (iStack_a8 < iVar3) {
            iVar3 = fn_82CE5410();
            puVar4 = (undefined4 *)
                     (**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x120);
            *(undefined2 *)(puVar4 + 1) = 0x120;
            *(undefined2 *)((int)puVar4 + 6) = 1;
            *puVar4 = &lbl_82144818;
            puVar4[2] = 0;
            puVar4[3] = 0;
            puVar4[4] = 0xffffffff;
            puVar4[5] = 0xffffffff;
            lVar9 = 7;
            *(undefined1 *)(puVar4 + 6) = 0;
            puVar6 = puVar4 + 0xc;
            *(undefined2 *)(puVar4 + 8) = 0x16;
            *(undefined2 *)(puVar4 + 0xc) = 0;
            *(undefined2 *)((int)puVar4 + 0x32) = 3;
            do {
              puVar6 = puVar6 + 1;
              *puVar6 = 0;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            puVar4[0x14] = 0;
            puVar4[0x15] = 0;
            puVar4[0x16] = 0x80000000;
            puVar4[0x17] = 0;
            puVar4[0x18] = 0;
            puVar4[0x19] = 0x80000000;
            puVar4[0x1a] = 0;
            puVar4[0x1b] = 0;
            puVar4[0x1c] = 0x80000000;
            puVar4[0x3d] = 0;
            puVar4[0x3e] = 0;
            puVar4[0x3f] = 0x80000000;
            puVar4[0x40] = 0;
            puVar4[0x41] = 0;
            puVar4[0x42] = 0x80000000;
            puVar4[0x43] = 0x103;
            puVar4[0x44] = 1;
            iVar3 = fn_82DF6F28(param_1,*puVar8,*(undefined4 *)(iVar5 + 0x78),puVar4);
            if (iVar3 == 0) {
              fn_82DF3CE0(param_4,puVar4);
            }
            fn_82CE4118(puVar4);
          }
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + 8;
        } while (iVar2 < iStack_bc);
      }
      iVar2 = fn_82CE5410();
      iStack_bc = 0;
      if ((uStack_b8 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar2 + 0x10) + 0x10))
                  (*(int **)(iVar2 + 0x10),iStack_c0,uStack_b8 & 0x3fffffff,8);
      }
      param_3 = param_3 + -1;
      iStack_c0 = 0;
      param_2 = param_2 + 1;
      uStack_b8 = 0x80000000;
    } while (param_3 != 0);
  }
  iVar5 = fn_82CE5410();
  fn_82CEA4B8(&uStack_b0,*(undefined4 *)(iVar5 + 0x10));
  fn_82BA02A8(&uStack_b0);
  return;
}

