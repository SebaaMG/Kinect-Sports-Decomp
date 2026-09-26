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
extern int fn_82773B90();


uint fn_827B6190(int *param_1,uint *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  uVar3 = ((uint)(byte)(*(byte *)((int)param_2 + 0xb) ^ *(byte *)((int)param_2 + 10) ^
                        *(byte *)(param_2 + 2) ^ *(byte *)((int)param_2 + 7) ^
                       *(byte *)((int)param_2 + 6)) ^ (uint)*(byte *)((int)param_2 + 9) << 1 ^
           (uint)*(ushort *)(param_2 + 1) ^ *param_2 >> 6 ^ *param_2) & *(uint *)(*param_1 + 4);
  iVar1 = *param_1;
  iVar4 = uVar3 * 0x18 + iVar1;
  if ((*(int *)(iVar4 + 8) != -2) && (uVar5 = uVar3, *(uint *)(iVar4 + 0xc) == uVar3)) {
    while( true ) {
      if ((*(uint *)(iVar4 + 0xc) == uVar3) &&
         (cVar2 = fn_82773B90(iVar4 + 0x10,param_2), cVar2 != '\0')) {
        return uVar5;
      }
      uVar5 = *(uint *)(iVar4 + 8);
      if (uVar5 == 0xffffffff) break;
      iVar4 = uVar5 * 0x18 + iVar1;
    }
  }
  return 0xffffffff;
}

