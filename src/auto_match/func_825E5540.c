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
extern int fn_825E67C8();
extern int fn_825E68F0();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


ulonglong fn_825E5540(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar2;
  ulonglong uVar1;
  undefined4 *puVar3;
  uint uVar4;
  uint uStack_40;
  uint uStack_3c;
  uint auStack_38 [14];
  
  uVar4 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x4a4);
  do {
    iVar2 = fn_825E67C8(*puVar3,param_2,param_3);
    if (iVar2 != 0) break;
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 1;
  } while ((int)uVar4 < 3);
  if ((int)uVar4 < 3) {
    fn_825E68F0(*(undefined4 *)((uVar4 + 0x129) * 4 + param_1),param_3,&uStack_40,&uStack_3c,
                    auStack_38);
    uVar1 = ((((ulonglong)uVar4 & 0xff) << 8 | (ulonglong)uStack_40 & 0xffffffff000000ff) << 8 |
            (ulonglong)uStack_3c & 0xffffffff000000ff) << 8 |
            (ulonglong)auStack_38[0] & 0xffffffff000000ff;
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}

