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


uint fn_82AAC8C0(int param_1,uint param_2,uint *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 4;
LAB_82aac9ac:
    *param_4 = uVar2;
  }
  else {
    if (param_1 == 3) {
      if (0xffff0103 < *param_3) {
        fn_82A29A38();
      }
      uVar1 = param_3[param_2 + 0x29];
      *param_4 = 4;
      param_2 = 0;
      if (uVar1 != 0) {
        return uVar1;
      }
    }
    else {
      if (param_1 == 8) {
        if (*param_3 < 0xffff0200) {
          fn_82A29A38();
        }
        if (3 < param_2) {
          fn_82A29A38();
        }
        if (*param_3 == 0xffff0200) {
          param_3[0x28] = 1 << (param_2 & 0x3f) | param_3[0x28];
          *param_4 = 4;
          return param_2 + 0x23;
        }
        uVar2 = 0x17;
        goto LAB_82aac9ac;
      }
      if (param_1 == 9) {
        *param_4 = 4;
        param_3[0x27] = 1;
        return 0x22;
      }
    }
    fn_82A29A38();
  }
  return param_2;
}

