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
extern int fn_82A29A38();
extern int fn_82AB0AC8();


undefined8 fn_82AB0DA8(uint *param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *apuStack_40 [16];
  
  uVar1 = *param_1;
  puVar4 = param_1 + 1;
  apuStack_40[0] = puVar4;
  if (0xffff01ff < uVar1) {
    fn_82A29A38();
  }
  do {
    uVar2 = *puVar4;
    if (uVar2 == 0xffff) {
      if ((int)puVar4 + (4 - (int)param_1) >> 2 == param_2) {
        return 0;
      }
      break;
    }
    uVar3 = uVar2 & 0xffff;
    if ((uVar2 & 0x80000000) != 0) break;
    if (uVar3 == 0xfffe) {
      apuStack_40[0] = puVar4 + (uVar2 >> 0x10 & 0x7fff) + 1;
    }
    else if ((uVar3 == 0xfffd) || ((uVar2 & 0xffff) == 0)) {
      apuStack_40[0] = puVar4 + 1;
    }
    else if (uVar3 == 0x51) {
      apuStack_40[0] = puVar4 + 6;
    }
    else {
      fn_82AB0AC8(uVar1,apuStack_40,param_3);
    }
    puVar4 = apuStack_40[0];
  } while ((int)apuStack_40[0] - (int)param_1 >> 2 <= param_2);
  fn_82A29A38();
  return 2;
}

