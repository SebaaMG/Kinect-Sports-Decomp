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
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82381BC0();
extern int fn_823AA970();
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_828BDDA0();
extern int fn_828BE208();
extern unsigned int lbl_82027360;
extern unsigned int lbl_82027368;


void fn_828E5A80(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar6;
  char cVar7;
  undefined8 uVar5;
  int aiStack_60 [24];
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x210);
  aiStack_60[0] = *piVar1;
  if ((int *)aiStack_60[0] != piVar1) {
    do {
      iVar4 = aiStack_60[0];
      puVar6 = (undefined4 *)fn_8265C9E0(0x90);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        fn_828BDDA0();
        *puVar6 = &lbl_82027368;
        puVar6[0x14] = &lbl_82027360;
        puVar6[0x20] = 0;
        puVar6[0x21] = 0;
        iVar2 = *(int *)(param_1 + 0xc);
        uVar3 = *(undefined4 *)(param_1 + 8);
        if ((iVar2 != 0) && (cVar7 = fn_8223AAC0(iVar2), cVar7 != '\0')) {
          if (puVar6[0x21] != 0) {
            fn_822315A0();
          }
          puVar6[0x21] = iVar2;
          puVar6[0x20] = uVar3;
        }
        puVar6[0x22] = 0;
        puVar6[0x23] = 0;
        iVar2 = param_2[1];
        uVar3 = *param_2;
        if ((iVar2 != 0) && (cVar7 = fn_8223AAC0(iVar2), cVar7 != '\0')) {
          if (puVar6[0x23] != 0) {
            fn_822315A0();
          }
          puVar6[0x23] = iVar2;
          puVar6[0x22] = uVar3;
        }
      }
      fn_82886518(puVar6,0xffffffffffffffff,0xffffffffffffffff);
      uVar3 = *(undefined4 *)(param_1 + 4);
      uVar5 = fn_823AA970(*(undefined4 *)(iVar4 + 0x10));
      fn_828BE208(uVar3,puVar6,uVar5,0);
      fn_82381BC0(aiStack_60);
    } while (aiStack_60[0] != *(int *)(*(int *)(param_1 + 4) + 0x210));
  }
  return;
}

