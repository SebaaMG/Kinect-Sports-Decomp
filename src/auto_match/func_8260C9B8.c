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
extern unsigned int *auStack_40;
extern int fn_827D9698();
extern int fn_827D96A0();
extern int fn_827DDDA0();
extern int fn_827DDDD8();
extern int fn_827DDFB8();
extern int fn_827DEA98();
extern int fn_827DEAA8();
extern int fn_827DEB38();
extern int fn_827DEB60();


undefined8 fn_8260C9B8(longlong param_1,int *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  undefined4 auStack_40 [2];
  undefined1 auStack_38 [56];
  
  RtlEnterCriticalSection(param_1 + 0x1a0);
  fn_827DDDA0(auStack_38,param_1 + 200);
  fn_827DEB38(auStack_38);
  while( true ) {
    cVar3 = fn_827DEB60(auStack_38);
    if (cVar3 != '\0') break;
    uVar1 = fn_827DEAA8(auStack_38);
    iVar2 = fn_827D9698();
    if (iVar2 == *param_2) {
      auStack_40[0] = fn_827D96A0(uVar1);
      iVar2 = fn_827DDDD8(param_3,auStack_40);
      if (iVar2 == 0) {
        fn_827DDFB8(param_3,uVar1);
      }
    }
    fn_827DEA98(auStack_38);
  }
  RtlLeaveCriticalSection(param_1 + 0x1a0);
  return 0;
}

