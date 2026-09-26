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
extern int fn_827A98B0();
extern int fn_827AEAA8();
extern int fn_827AF288();


void fn_827555D8(uint *param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  
  uVar1 = *param_1;
  if ((uVar1 == 0) || (bVar2 = false, param_1[1] <= uVar1)) {
    bVar2 = true;
  }
  if (!bVar2) {
    if (param_1[0x16] == 0) {
      param_1[0x16] = (uint)(*(ushort *)(uVar1 + 4) >> 0xc);
    }
    *param_1 = uVar1 + 8;
    if (((*(ushort *)(uVar1 + 0xc) & 0xf000) != 0) && (param_1[0x16] != 0)) {
      cVar3 = fn_827AEAA8(param_1 + 3);
      if (cVar3 == '\0') {
        fn_827AF288(param_1 + 3,param_1[0x16]);
        param_1[0x16] = 0;
      }
    }
    fn_827A98B0(param_1);
  }
  return;
}

