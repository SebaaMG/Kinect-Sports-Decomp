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
extern int fn_82BFD650();
extern int fn_82BFD918();


ulonglong fn_82BFE128(int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x40) == 0x4c665175)) {
    puVar1 = *(uint **)(param_1 + 0x4c);
    uVar5 = 0;
    if ((puVar1 == (uint *)0x0) || (uVar2 = *puVar1, (uVar2 & 4) == 0)) {
      iVar4 = fn_82BFD650(param_1,(ulonglong)param_2 << 0x20);
      if (iVar4 == 0) {
        return 0xffffffff80310001;
      }
    }
    else {
      uVar3 = fn_82BFD918(param_1,(ulonglong)param_2 << 0x20,puVar1[1],puVar1[5],uVar2 >> 4 & 1,
                            puVar1[3],uVar2 >> 6 & 1);
      if ((uVar3 & 0xffffffff) != 0) {
        if ((uVar3 & 0xffffffff) == 0x102) {
          uVar5 = 0xffffffff80310001;
        }
        else {
          uVar5 = uVar3;
          if (0 < (int)uVar3) {
            uVar5 = uVar3 & 0xffff | 0x80070000;
          }
        }
      }
    }
    return uVar5;
  }
  return 0xffffffff80070057;
}

