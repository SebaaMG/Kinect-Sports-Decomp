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
extern unsigned int *auStack_30;
extern int fn_8288B760();
extern int fn_8288F1E8();
extern int fn_828B23E0();
extern int fn_828B2BF8();
extern int fn_828B5580();
extern int fn_828B55B0();


undefined8 fn_828DC748(int param_1)

{
  undefined1 uVar1;
  ulonglong uVar2;
  char cVar4;
  undefined8 uVar3;
  undefined1 auStack_30 [48];
  
  fn_828B5580(auStack_30,param_1 + 0x60);
  uVar2 = fn_8288F1E8(*(undefined4 *)(param_1 + 0x6c),auStack_30);
  fn_828B55B0(auStack_30);
  if (((uVar2 & 0xffffffff) != 0) && (cVar4 = fn_8288B760(uVar2), cVar4 != '\0')) {
    uVar1 = *(undefined1 *)(param_1 + 0x80);
    uVar3 = fn_828B2BF8();
    fn_828B23E0(uVar3,uVar2,uVar1,param_1 + 0x88);
  }
  return 1;
}

