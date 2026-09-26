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
extern unsigned int *auStack_20;
extern int fn_8265F888();
extern int fn_8265F8D8();
extern int fn_8265FA90();
extern int fn_826600B8();
extern int fn_82668EE0();
extern int fn_826696A8();
extern int fn_826697B8();
extern int fn_82669808();
extern unsigned int stack0x00000024;
extern unsigned int stack0x0000002c;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;


undefined4
fn_82668B88(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  char cVar3;
  undefined4 *puVar2;
  undefined4 uStack00000014;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  undefined4 uStack0000002c;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [20];
  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uVar1 = fn_8265F888(auStack_20,param_2);
  cVar3 = fn_82669808(&stack0x00000024,uVar1);
  if (cVar3 != '\0') {
    uVar1 = fn_8265F8D8(auStack_1c,uStack0000001c);
    cVar3 = fn_82669808(&stack0x0000002c,uVar1);
    if (cVar3 != '\0') {
      fn_826696A8(uStack0000001c);
      fn_8265F888(uStack00000014,uStack0000001c);
      return uStack00000014;
    }
  }
  while (cVar3 = fn_8265FA90(&stack0x00000024,&stack0x0000002c), cVar3 != '\0') {
    puVar2 = (undefined4 *)fn_826697B8(auStack_18,&stack0x00000024,0);
    fn_82668EE0(auStack_14,uStack0000001c,*puVar2);
  }
  fn_826600B8(uStack00000014,uStack00000024,uStack0000001c);
  return uStack00000014;
}

