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
extern unsigned int *auStack_38;
extern unsigned int *auStack_48;
extern int fn_822315A0();
extern int fn_823F2E20();
extern int fn_8265C9E0();
extern int fn_828A6130();
extern int fn_828CCDD8();
extern int fn_828CD0D8();
extern int fn_828CD4E0();
extern int fn_828CD8A8();
extern int fn_828CE388();
extern unsigned int iStack_34;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_828CE460(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar5;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uStack_50;
  uint uStack_4c;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  
  uVar1 = *(uint *)(param_1 + 4);
  uStack_50 = *(uint *)(param_2 + 0x84);
  uVar7 = uVar1 + 0x40 & 0xff;
  uVar2 = uVar1 - 0x40 & 0xff;
  if ((((uVar2 < uVar7) && (uVar2 <= uStack_50)) && (uStack_50 < uVar7)) ||
     ((uVar7 < uVar2 && ((uVar2 <= uStack_50 || (uStack_50 < uVar7)))))) {
    if (uStack_50 != uVar1) {
      *(uint *)(param_1 + 4) = uStack_50;
      uVar1 = uStack_50 - 0x40 & 0xff;
      uVar7 = (uStack_50 + 0x40 & 0xff) + 1;
      if (uVar7 != uVar1) {
        do {
          uStack_4c = uVar7;
          fn_828CCDD8(&uStack_40,param_1 + 8,&uStack_4c);
          fn_828A6130(auStack_48,param_1 + 8,uStack_40,uStack_3c);
          uVar7 = uVar7 + 1 & 0xff;
        } while (uVar7 != uVar1);
      }
    }
    iVar8 = param_1 + 8;
    fn_828CD0D8(&uStack_4c,iVar8,&uStack_50);
    if (uStack_4c == *(uint *)(param_1 + 0xc)) {
      puVar5 = (undefined4 *)fn_8265C9E0(0x14);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
      }
      uVar3 = fn_828CD4E0(auStack_38,puVar5);
      uVar4 = fn_828CE388(iVar8,&uStack_50);
      fn_823F2E20(uVar4,uVar3);
      if (iStack_34 != 0) {
        fn_822315A0();
      }
    }
    puVar5 = (undefined4 *)fn_828CE388(iVar8,&uStack_50);
    cVar6 = fn_828CD8A8(*puVar5,param_2);
    if (cVar6 != '\0') {
      fn_828CCDD8(&uStack_40,iVar8,&uStack_50);
      fn_828A6130(auStack_48,iVar8,uStack_40,uStack_3c);
    }
  }
  else {
    *(undefined1 *)(param_2 + 0xc0) = 1;
  }
  return;
}

