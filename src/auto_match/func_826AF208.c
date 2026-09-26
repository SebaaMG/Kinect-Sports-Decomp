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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
extern unsigned int *auStack_40;
extern int fn_826827F8();
extern int fn_82696330();
extern int fn_826AA010();
extern int fn_826ABE30();
extern int fn_826BD928();
extern int fn_826C6748();


void fn_826AF208(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  char cVar5;
  uint uVar4;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint auStack_40 [16];
  
  auStack_40[0] = 0;
  if ((*(byte *)(*param_1 + 0xc6) & 0x40) == 0) {
    iVar3 = fn_826BD928((ulonglong)*(uint *)(*param_1 + 0x74) + 0x68);
  }
  else {
    iVar3 = 0;
  }
  if (param_3 == 0x8a) {
    cVar5 = '\x01';
    iVar7 = param_1[6] + param_1[2];
    auStack_40[0] = (uint)CONCAT11(*(undefined1 *)(iVar7 + 4),*(undefined1 *)(iVar7 + 3));
    uVar9 = (uint)*(byte *)(iVar7 + 5);
  }
  else {
    cVar5 = fn_826AA010(param_2,*param_1,*(undefined4 *)(*param_1 + 8),0,auStack_40);
    iVar7 = *param_1;
    puVar10 = (uint *)(iVar7 + 8);
    uVar9 = (uint)*(byte *)(param_1[6] + param_1[2] + 3);
    fn_82696330(*puVar10);
    uVar4 = *puVar10;
    *puVar10 = uVar4 - 0x10;
    if (uVar4 - 0x10 < *(uint *)(iVar7 + 0xc)) {
      fn_826827F8(puVar10);
    }
  }
  if ((iVar3 != 0) && (cVar5 != '\0')) {
    uVar4 = (**(code **)(**(int **)(iVar3 + 0x9c) + 0x28))();
    if ((uVar4 != 0) && (uVar4 <= auStack_40[0])) {
      auStack_40[0] = uVar4 - 1;
    }
    uVar4 = fn_826C6748(iVar3);
    if (uVar4 <= auStack_40[0]) {
      uVar6 = 0;
      uVar4 = param_1[5];
      uVar1 = *(uint *)(*(int *)(param_2 + 8) + 0xc);
      uVar8 = uVar4;
      if (uVar9 != 0) {
        do {
          if (uVar1 <= uVar8) goto LAB_826af39c;
          iVar3 = param_1[2];
          pbVar2 = (byte *)(iVar3 + uVar8);
          uVar8 = uVar8 + 1;
          if ((*pbVar2 & 0x80) != 0) {
            uVar8 = CONCAT11(*(undefined1 *)(iVar3 + uVar8 + 1),*(undefined1 *)(iVar3 + uVar8)) +
                    uVar8 + 2;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar9);
      }
      if (uVar8 < uVar1) {
        param_1[5] = uVar8;
      }
      else {
LAB_826af39c:
        if ((*(byte *)((int)param_1 + 0x36) & 0x80) != 0) {
          fn_826ABE30(param_1 + 9,0xffffffff82007750,uVar4,param_1[4]);
        }
      }
    }
  }
  return;
}

