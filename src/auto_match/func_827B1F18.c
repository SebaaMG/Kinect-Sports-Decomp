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
extern int fn_827B19D8();


undefined8 fn_827B1F18(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined8 uVar5;
  byte bVar6;
  byte abStack_30 [48];
  
  cVar1 = (char)param_2;
  bVar2 = (byte)(param_2 >> 4);
  cVar4 = (char)param_3;
  if ((((param_2 < -0x20) || (0x1f < param_2)) || (param_3 < -0x20)) || (0x1f < param_3)) {
    bVar6 = (byte)(param_3 >> 2);
    if (((param_2 < -0x200) || (0x1ff < param_2)) || ((param_3 < -0x200 || (0x1ff < param_3)))) {
      bVar3 = (byte)(param_2 >> 0xc);
      if (((param_2 < -0x2000) || (0x1fff < param_2)) || ((param_3 < -0x2000 || (0x1fff < param_3)))
         ) {
        abStack_30[0] = cVar1 << 4 | 7;
        fn_827B19D8(*param_1,abStack_30);
        abStack_30[0] = bVar2;
        fn_827B19D8(*param_1,abStack_30);
        abStack_30[0] = cVar4 << 6 | bVar3 & 0x3f;
        fn_827B19D8(*param_1,abStack_30);
        abStack_30[0] = bVar6;
        fn_827B19D8(*param_1,abStack_30);
        abStack_30[0] = (byte)(param_3 >> 10);
        fn_827B19D8(*param_1,abStack_30);
        uVar5 = 5;
      }
      else {
        abStack_30[0] = cVar1 << 4 | 6;
        fn_827B19D8(*param_1,abStack_30);
        abStack_30[0] = bVar2;
        fn_827B19D8(*param_1,abStack_30);
        abStack_30[0] = cVar4 << 2 | bVar3 & 3;
        fn_827B19D8(*param_1,abStack_30);
        abStack_30[0] = (byte)(param_3 >> 6);
        fn_827B19D8(*param_1,abStack_30);
        uVar5 = 4;
      }
    }
    else {
      abStack_30[0] = cVar1 << 4 | 5;
      fn_827B19D8(*param_1,abStack_30);
      abStack_30[0] = cVar4 << 6 | bVar2 & 0x3f;
      fn_827B19D8(*param_1,abStack_30);
      abStack_30[0] = bVar6;
      fn_827B19D8(*param_1,abStack_30);
      uVar5 = 3;
    }
  }
  else {
    abStack_30[0] = cVar1 << 4 | 4;
    fn_827B19D8(*param_1,abStack_30);
    abStack_30[0] = cVar4 << 2 | bVar2 & 3;
    fn_827B19D8(*param_1,abStack_30);
    uVar5 = 2;
  }
  return uVar5;
}

