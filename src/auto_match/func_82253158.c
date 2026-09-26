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
extern int fn_82233428();
extern int fn_8223A7A8();
extern int fn_823EC418();
extern int fn_82517978();
extern int fn_8265C9E0();
extern int fn_828E4768();
extern int fn_828E4E08();
extern unsigned int iStack_34;
extern unsigned int lbl_821968A4;
extern unsigned int lbl_82196E94;
extern unsigned int lbl_8219802C;
extern unsigned int lbl_82198044;
extern unsigned int uStack_38;


undefined4 * fn_82253158(undefined4 *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  
  uVar1 = fn_8265C9E0(0x28);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_828E4E08(uVar1,param_2);
  }
  fn_8223A7A8(&uStack_38,uVar2);
  puVar3 = (undefined4 *)fn_8265C9E0(0xe68);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    fn_82233428(puVar3);
    *puVar3 = &lbl_8219802C;
    puVar3[10] = &lbl_821968A4;
    fn_823EC418(puVar3 + 0xc);
    *puVar3 = &lbl_8219802C;
    puVar3[10] = &lbl_82198044;
  }
  puStack_40 = (undefined4 *)0x0;
  puStack_3c = (undefined4 *)0x0;
  puVar4 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[3] = puVar3;
    puVar4[1] = 1;
    *puVar4 = &lbl_82196E94;
    puVar4[2] = 1;
  }
  if (puStack_3c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  puStack_40 = puVar3;
  puStack_3c = puVar4;
  fn_828E4768(uStack_38,0xffffffff831d7008,&puStack_40);
  if (puStack_3c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  *param_1 = 0;
  param_1[1] = 0;
  fn_82517978(param_1,uStack_38,iStack_34,0);
  if (iStack_34 != 0) {
    fn_822315A0(iStack_34);
  }
  return param_1;
}

