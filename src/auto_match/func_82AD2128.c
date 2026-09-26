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
extern int fn_82AA66A8();
extern int fn_82AC6560();
extern int fn_82AD1978();
extern int fn_82AD1AC8();


void fn_82AD2128(undefined8 param_1,int param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = fn_82AD1AC8();
  if (iVar1 == 0) {
    puVar2 = (uint *)fn_82AC6560(param_4,0x14,0x1a);
    puVar2[3] = param_3;
    *puVar2 = (param_2 + 1) * 0x2000 & 0x1ffe000U | *puVar2 & 0xfe001fff;
    puVar2[2] = *(uint *)(param_3 + 4);
    *(uint **)(param_3 + 4) = puVar2;
    fn_82AD1978(param_1,puVar2);
  }
  else if (*(uint *)(iVar1 + 0xc) != param_3) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(*(undefined4 *)(*(int *)((uint)param_1 & 0xfffff000) + 0x94),0x12c0);
  }
  return;
}

