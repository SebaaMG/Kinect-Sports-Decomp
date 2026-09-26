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
extern int fn_82A1E810();
extern int fn_82A1F2F8();
extern unsigned int lbl_83219BC4;
extern unsigned int lbl_83219C0C;
extern unsigned int lbl_83219C58;
extern unsigned int uRam83219c10;
extern unsigned int uRam83219c14;


void fn_82A20700(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  RtlEnterCriticalSection(0xffffffff83219ba0);
  if (param_1 == 0) {
    uRam83219c10 = 0;
    lbl_83219C0C = (uint)LZCOUNT(lbl_83219C58) >> 5;
  }
  else {
    iVar1 = fn_82A1F2F8();
    uVar3 = iVar1 + param_1 | 1;
    if ((uRam83219c10 != 0) && (uVar2 = uRam83219c10 - uVar3, uRam83219c10 = uVar3, 3599999 < uVar2)
       ) goto code_r0x82a207a4;
    lbl_83219C0C = 1;
    uRam83219c10 = uVar3;
  }
  uRam83219c14 = 0;
  fn_82A1E810(lbl_83219BC4);
code_r0x82a207a4:
  RtlLeaveCriticalSection(0xffffffff83219ba0);
  return;
}

