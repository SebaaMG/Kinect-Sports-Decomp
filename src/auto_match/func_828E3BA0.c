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
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8265C9E0();
extern int fn_828E6EC0();
extern int fn_828E7140();
extern unsigned int iStack_34;
extern unsigned int lbl_820271B0;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_828E3BA0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  
  puVar2 = (undefined4 *)fn_8265C9E0(0x1c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    fn_828E6EC0(puVar2,0xffffffff8315a2ec,param_1 + 8);
    *puVar2 = &lbl_820271B0;
    puVar2[6] = *(undefined4 *)(param_2 + 0x30);
  }
  puVar2 = (undefined4 *)fn_828E7140(auStack_38,puVar2);
  uStack_40 = 0;
  uStack_3c = 0;
  fn_82517978(&uStack_40,*puVar2,puVar2[1],0);
  iVar1 = *(int *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = uStack_3c;
  *(undefined4 *)(param_2 + 8) = uStack_40;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  *(int *)(*(int *)(param_2 + 0x30) * 4 + *(int *)(param_1 + 0x28)) = param_2;
  return;
}

