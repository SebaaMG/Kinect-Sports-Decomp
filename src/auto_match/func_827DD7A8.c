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
extern unsigned int *auStack_60;
extern int fn_8256D3A8();
extern int fn_8256D798();
extern int fn_8260D640();
extern int fn_827D50C0();
extern int fn_827D9EB0();
extern int fn_827DA090();
extern int fn_82A29DE8();
extern unsigned int uStack_8c;


undefined8 fn_827DD7A8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 ***apppuStack_a0 [5];
  uint uStack_8c;
  undefined1 auStack_60 [96];
  
  uVar1 = *param_2;
  fn_8256D3A8(apppuStack_a0,*(undefined4 *)(param_1 + 8));
  uVar2 = fn_827DA090(auStack_60,uVar1);
  fn_8260D640(apppuStack_a0,uVar2,0,0xffffffffffffffff);
  fn_8256D798(auStack_60,1,0);
  if (uStack_8c < 0x10) {
    apppuStack_a0[0] = apppuStack_a0;
  }
  uVar2 = fn_82A29DE8(apppuStack_a0[0],0xffffffff80000000,1,0,3,0x60000000,0);
  fn_827D9EB0(uVar1,uVar2);
  if ((int)uVar2 == -1) {
    uVar1 = param_2[1];
    uVar2 = thunk_FUN_82a2b798();
    fn_827D50C0(uVar1,uVar2);
    uVar2 = thunk_FUN_82a2b798();
  }
  else {
    uVar2 = 0;
  }
  fn_8256D798(apppuStack_a0,1,0);
  return uVar2;
}

