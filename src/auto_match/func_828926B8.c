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
extern int fn_8240D928();
extern int fn_8288E0C8();
extern int fn_82891180();
extern int fn_8289D8D0();
extern int fn_828A12E8();
extern int fn_828B55F0();
extern int fn_828B55F8();
extern int fn_828B5600();
extern int fn_828B5630();
extern unsigned int uStack_3c;


void fn_828926B8(int param_1,undefined8 param_2)

{
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar1;
  uint *puVar5;
  int iVar6;
  undefined2 auStack_40 [2];
  uint uStack_3c;
  undefined1 auStack_38 [56];
  
  iVar6 = param_1 + 0x14;
  iVar2 = fn_828B55F0(iVar6);
  fn_8289D8D0(*(undefined4 *)(param_1 + 0x10));
  iVar3 = fn_8240D928();
  if ((iVar2 == iVar3) && (*(char *)(param_1 + 0x1c) == '\0')) {
    auStack_40[0] = fn_828B5600(iVar6);
    uVar4 = fn_828B55F8(iVar6);
    lVar1 = fn_828A12E8(param_2);
    uStack_3c = uVar4 & 0xffff;
    puVar5 = (uint *)fn_8288E0C8(auStack_38,lVar1 + 0x7c,&uStack_3c);
    fn_82891180((ulonglong)*puVar5 + 0x10,auStack_40);
  }
  fn_828B5630(iVar6);
  return;
}

