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
extern int fn_827DE858();
extern unsigned int iStack_3c;
extern unsigned int lbl_821CAC38;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


undefined4 * fn_825BDE90(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar2 = (undefined4 *)fn_8265C9E0(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    uStack_40 = 0;
    iStack_3c = 0;
    fn_82517978(&uStack_40,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),1);
    iVar1 = iStack_3c;
    uStack_38 = 0;
    uStack_34 = 0;
    fn_82517978(&uStack_38,uStack_40,iStack_3c,0);
    fn_827DE858(puVar2,&uStack_38,param_2);
    *puVar2 = &lbl_821CAC38;
    if (iVar1 != 0) {
      fn_822315A0(iVar1);
    }
  }
  return puVar2;
}

