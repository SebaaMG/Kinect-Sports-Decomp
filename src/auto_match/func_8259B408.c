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
extern int fn_82526C70();
extern int fn_8265C9E0();
extern int fn_827D9630();
extern int fn_827D96A0();
extern int fn_827DE858();
extern unsigned int iStack_4c;
extern unsigned int lbl_821CA774;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


undefined4 *
fn_8259B408(int param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iVar1 = *param_5;
  uVar3 = fn_827D96A0(param_2);
  fn_82526C70(iVar1 + 0x170,0x2a,0xffffffff821c557c,uVar3);
  *(undefined4 *)(iVar1 + 0x68) = *(undefined4 *)(param_1 + 0x98);
  puVar4 = (undefined4 *)fn_8265C9E0(0x70);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uStack_50 = 0;
    iStack_4c = 0;
    fn_82517978(&uStack_50,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),1);
    iVar2 = iStack_4c;
    uStack_48 = 0;
    uStack_44 = 0;
    iVar1 = *param_5;
    fn_82517978(&uStack_48,uStack_50,iStack_4c,0);
    fn_827DE858(puVar4,&uStack_48,iVar1);
    *puVar4 = &lbl_821CA774;
    fn_827D9630(puVar4 + 6,param_2);
    puVar4[0xc] = param_3;
    puVar4[0x16] = 0;
    puVar4[0x18] = 0;
    puVar4[0x1a] = 1;
    if (iVar2 != 0) {
      fn_822315A0(iVar2);
    }
  }
  return puVar4;
}

