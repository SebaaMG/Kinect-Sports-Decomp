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
extern int fn_8265C9E0();
extern int fn_827D9630();
extern int fn_827DE858();
extern unsigned int iStack_4c;
extern unsigned int lbl_821CBF38;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


undefined4 *
fn_826282E8(int param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  *param_5 = 0;
  puVar3 = (undefined4 *)fn_8265C9E0(0x38);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uStack_50 = 0;
    iStack_4c = 0;
    fn_82517978(&uStack_50,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),1);
    iVar2 = iStack_4c;
    uStack_48 = 0;
    uStack_44 = 0;
    uVar1 = *param_5;
    fn_82517978(&uStack_48,uStack_50,iStack_4c,0);
    fn_827DE858(puVar3,&uStack_48,uVar1);
    *puVar3 = &lbl_821CBF38;
    fn_827D9630(puVar3 + 6,param_2);
    puVar3[0xc] = param_3;
    if (iVar2 != 0) {
      fn_822315A0(iVar2);
    }
  }
  return puVar3;
}

