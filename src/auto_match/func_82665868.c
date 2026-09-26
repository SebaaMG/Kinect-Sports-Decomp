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
extern unsigned int *auStack_14;
extern unsigned int *auStack_18;
extern unsigned int *auStack_1c;
extern int fn_8265F598();
extern int fn_8265FA58();
extern int fn_82663C10();
extern int fn_826666C8();
extern int fn_82668D40();
extern int fn_82668D80();
extern int fn_82668EA0();
extern int fn_8266C340();
extern unsigned int iStack00000014;
extern unsigned int uStack_20;


undefined4 fn_82665868(int param_1)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  char cVar5;
  uint *puVar3;
  int iVar4;
  int iStack00000014;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  iStack00000014 = param_1;
  if (param_1 == 0) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x38c,0xffffffff82001e9c);
  }
  fn_82663C10(&uStack_20);
  puVar2 = (undefined4 *)fn_82668D40(auStack_1c,0xffffffff831e7a88);
  uStack_20 = *puVar2;
  while( true ) {
    uVar1 = fn_82668D80(auStack_14,0xffffffff831e7a88);
    cVar5 = fn_82668EA0(&uStack_20,uVar1);
    iVar4 = iStack00000014;
    if (cVar5 == '\0') {
      return 0;
    }
    puVar3 = (uint *)fn_8265FA58(&uStack_20,0);
    iVar4 = fn_8265F598((ulonglong)*puVar3 + 0x1c,iVar4);
    if (iVar4 == 0) break;
    fn_826666C8(auStack_18,&uStack_20,0);
  }
  puVar2 = (undefined4 *)fn_8265FA58(&uStack_20,0);
  return *puVar2;
}

