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
extern int fn_82230110();
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8265C9E0();
extern int fn_8266C8A0();
extern int fn_8266EC60();
extern int fn_82670230();
extern int fn_82670F48();
extern int fn_8267C4F0();
extern int fn_82689768();
extern int fn_82A1BB18();
extern int fn_82BFE128();
extern unsigned int iStack_44;
extern unsigned int lbl_82002C94;
extern unsigned int *lbl_831E7B40;
extern unsigned int lbl_831E7B44;
extern unsigned int uStack_48;
extern U64 storeWordConditionalIndexed();


void fn_826728E8(int param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar5;
  int *piVar6;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 *puVar7;
  uint *puVar8;
  char in_RESERVE;
  int aiStack_50 [2];
  undefined4 uStack_48;
  int iStack_44;
  
  aiStack_50[0] = 0;
  iVar5 = fn_82A1BB18();
  if (iVar5 == lbl_831E7B44) {
    piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0xc) + 0x60))
                              (*(int **)(param_1 + 0xc),param_2);
    if (piVar6 != (int *)0x0) {
      uVar3 = (**(code **)(*piVar6 + 8))(piVar6);
      if (((uVar3 & 0xff00) == 0x100) && (piVar6 = (int *)piVar6[3], piVar6 != (int *)0x0)) {
        uVar4 = fn_8266EC60();
        puVar7 = (undefined4 *)fn_8266C8A0(aiStack_50,uVar4);
        uVar3 = (**(code **)(*piVar6 + 0xc))(piVar6,*puVar7);
        bVar1 = uVar3 == 0;
        if (!bVar1) {
          do {
            puVar8 = (uint *)(uVar3 + 4);
            if (in_RESERVE != '\0') {
              uVar2 = storeWordConditionalIndexed((ulonglong)*puVar8 + 1,0,uVar3 + 4);
              *puVar8 = uVar2;
              bVar1 = true;
            }
          } while (!bVar1);
        }
        if (aiStack_50[0] != 0) {
          fn_8267C4F0();
        }
        if ((uVar3 & 0xffffffff) != 0) {
          (**(code **)(*(int *)uVar3 + 0x34))(uVar3,param_3,param_1,0);
          fn_82689768(piVar6,uVar3);
          fn_82670230(uVar3);
        }
      }
    }
  }
  else if (*(int *)(param_1 + 0xe8) == 0) {
    puVar7 = (undefined4 *)fn_8265C9E0(0x34);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      uStack_48 = 0;
      iStack_44 = 0;
      fn_82517978(&uStack_48,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),1);
      fn_82670F48(puVar7,&uStack_48);
      *puVar7 = &lbl_82002C94;
      fn_82230110(puVar7 + 5,param_2);
      puVar7[0xc] = (int)param_3;
      if (iStack_44 != 0) {
        fn_822315A0();
      }
    }
    fn_82BFE128(*lbl_831E7B40,puVar7);
  }
  return;
}

