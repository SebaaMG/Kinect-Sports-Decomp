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
extern unsigned int *auStack_40;
extern unsigned int *auStack_5c;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_823BC978();
extern unsigned int iStack_6c;
extern unsigned int iStack_74;
extern unsigned int iStack_7c;
extern unsigned int lbl_821B5EA4;
extern unsigned int uStack_30;
extern unsigned int uStack_61;


undefined4 fn_823BC4D8(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 auStack_80 [4];
  int iStack_7c;
  undefined1 auStack_78 [4];
  int iStack_74;
  undefined1 auStack_70 [4];
  int iStack_6c;
  undefined1 uStack_61;
  undefined **ppuStack_60;
  undefined1 auStack_5c [12];
  undefined ***pppuStack_50;
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  
  fn_82365BD8(auStack_70);
  fn_82365BD8(auStack_78,auStack_70);
  fn_82365BD8(auStack_80,auStack_78);
  ppuStack_60 = &lbl_821B5EA4;
  fn_82365BD8(auStack_5c,auStack_80);
  pppuStack_50 = &ppuStack_60;
  if (iStack_7c != 0) {
    fn_822315A0();
  }
  if (iStack_74 != 0) {
    fn_822315A0();
  }
  if (iStack_6c != 0) {
    fn_822315A0();
  }
  puVar1 = *(undefined4 **)(param_1 + 0x24);
  uVar2 = *puVar1;
  if (pppuStack_50 == (undefined ***)0x0) {
    uStack_30 = 0;
  }
  else {
    puVar5 = auStack_40;
    if (pppuStack_50 != &ppuStack_60) {
      puVar5 = (undefined1 *)0x0;
    }
    uStack_30 = (*(code *)**pppuStack_50)(pppuStack_50,puVar5);
  }
  piVar4 = (int *)fn_823BC978(auStack_80,uVar2,puVar1,auStack_40);
  iVar3 = *piVar4;
  if (pppuStack_50 != (undefined ***)0x0) {
    (*(code *)(*pppuStack_50)[3])
              (pppuStack_50,
               (int)(auStack_5c + -(int)pppuStack_50 + -4) -
               (int)(&uStack_61 +
                    (uint)(auStack_5c + -(int)pppuStack_50 + -4 == (undefined1 *)0x0) +
                    -(int)pppuStack_50));
  }
  return *(undefined4 *)(iVar3 + 0xc);
}

