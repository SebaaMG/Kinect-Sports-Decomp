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
extern int fn_82824338();
extern int fn_82826120();
extern int fn_828297A0();
extern int fn_8282A0E8();
extern int fn_82835208();
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_54;
extern unsigned int uStack_58;


undefined8 fn_82833BC8(undefined8 param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char cVar6;
  int iVar5;
  undefined8 uVar4;
  uint uVar7;
  undefined4 *puVar8;
  int aiStack_60 [2];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 *puStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  uVar1 = *(undefined4 *)*param_4;
  fn_82826120(param_1,aiStack_60);
  iVar2 = *(int *)(param_4[2] + 4);
  iVar3 = **(int **)(aiStack_60[0] + 0x388);
  cVar6 = fn_82824338(param_2);
  if (cVar6 == '\0') {
    uVar4 = 1;
  }
  else {
    uVar7 = 0;
    if (*(int *)(param_4[2] + 0xc) != 0) {
      do {
        iVar5 = *(int *)(iVar2 * 0x20 + iVar3 + 0x10) * uVar7;
        puVar8 = (undefined4 *)(iVar5 + param_3);
        if (*(int *)(iVar5 + param_3) != 0) {
          cVar6 = fn_8282A0E8(aiStack_60[0],puVar8);
          if (cVar6 != '\0') {
            uStack_58 = *puVar8;
            uStack_54 = 0;
            iVar5 = fn_828297A0(uVar1,&uStack_58);
            if (iVar5 != 0) {
              uStack_44 = *puVar8;
              uStack_40 = uStack_54;
              puStack_48 = puVar8;
              fn_82835208(param_4[1],&puStack_48);
            }
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_4[2] + 0xc));
    }
    uVar4 = 0;
  }
  return uVar4;
}

