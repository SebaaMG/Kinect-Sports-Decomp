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
extern int fn_82517978();
extern int fn_8251F718();
extern int fn_8251FA58();
extern int fn_8265C9E0();
extern int fn_8266C890();
extern int fn_8266EC60();
extern int fn_82670F48();
extern int fn_82683F30();
extern int fn_82687270();
extern int fn_82688820();
extern int fn_82A1BB18();
extern int fn_82BFE128();
extern unsigned int iStack_3c;
extern unsigned int lbl_82002C70;
extern unsigned int *lbl_831E7B40;
extern unsigned int lbl_831E7B44;
extern unsigned int uStack_40;


undefined8 fn_826718E8(int param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar2;
  undefined8 uVar1;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 uStack_40;
  int iStack_3c;
  
  uStack_40 = 0;
  uVar5 = 1;
  iVar2 = fn_82A1BB18();
  if (iVar2 == lbl_831E7B44) {
    iVar2 = fn_8251F718(param_1 + 0xd4);
    uVar1 = fn_8266EC60();
    fn_8266C890(uVar1,iVar2);
    uVar3 = fn_82683F30(param_2,**(undefined4 **)(iVar2 + 4),2,0);
    if (*(int *)(param_1 + 0xc) != 0) {
      fn_82687270();
    }
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    uVar1 = fn_8266EC60();
    fn_8266C890(uVar1,0);
    fn_8251FA58(iVar2);
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar5 = 0;
    }
    else {
      if ((param_3 & 0xffffffff) != 0) {
        fn_82688820(param_3,*(int *)(param_1 + 0xc),0);
      }
      *(undefined4 *)(param_1 + 0xf0) = 1;
    }
  }
  else {
    puVar4 = (undefined4 *)fn_8265C9E0(0x1c);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      uStack_40 = 0;
      iStack_3c = 0;
      fn_82517978(&uStack_40,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),1);
      fn_82670F48(puVar4,&uStack_40);
      puVar4[5] = (int)param_2;
      puVar4[6] = (int)param_3;
      *puVar4 = &lbl_82002C70;
      if (iStack_3c != 0) {
        fn_822315A0();
      }
    }
    fn_82BFE128(*lbl_831E7B40,puVar4);
  }
  return uVar5;
}

