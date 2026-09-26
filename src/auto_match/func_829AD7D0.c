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
extern int fn_829ABDA0();
extern int fn_829ABE88();
extern int fn_829AC2D8();
extern int fn_829AC690();
extern int fn_829ACA30();
extern int fn_829ACD40();
extern int fn_829AD470();
extern int fn_829AD570();
extern int fn_829AD6F0();


undefined8 fn_829AD7D0(int *param_1)

{
  int iVar1;
  code *pcVar2;
  
  do {
    while( true ) {
      if (param_1[0x69] == 0) {
        if (*(int *)(param_1[0x6f] + 0xc) == 0) {
          iVar1 = fn_829AD6F0();
        }
        else {
          iVar1 = fn_829AD570(param_1);
        }
        if (iVar1 == 0) {
          return 0;
        }
      }
      iVar1 = param_1[0x69];
      if (0xcf < iVar1) break;
      if (iVar1 < 0xcd) {
        if (iVar1 < 0xc9) {
          if (0xc4 < iVar1) goto LAB_829ad904;
          if (iVar1 < 0xc3) {
            if (iVar1 == 0xc2) {
              iVar1 = fn_829ABE88(param_1,1,0);
            }
            else {
              if (iVar1 == 1) goto switchD_829ad960_caseD_0;
              if ((iVar1 < 0xc0) || (0xc1 < iVar1)) goto switchD_829ad960_default;
              iVar1 = fn_829ABE88(param_1,0,0);
            }
          }
          else {
            if (iVar1 == 0xc3) goto LAB_829ad904;
            if (iVar1 != 0xc4) goto switchD_829ad960_default;
            iVar1 = fn_829AC690(param_1);
          }
        }
        else {
          if (3 < iVar1 - 0xc9U) goto switchD_829ad960_default;
          if (iVar1 == 0xca) {
            iVar1 = fn_829ABE88(param_1,1,1);
          }
          else {
            if (iVar1 == 0xcb) goto LAB_829ad904;
            if (iVar1 != 0xc9) goto LAB_829ad8f8;
            iVar1 = fn_829ABE88(param_1,0,1);
          }
        }
LAB_829ada6c:
        if (iVar1 == 0) {
          return 0;
        }
        param_1[0x69] = 0;
      }
      else {
LAB_829ad904:
        *(undefined4 *)(*param_1 + 0x14) = 0x3c;
        *(int *)(*param_1 + 0x18) = param_1[0x69];
        (**(code **)*param_1)(param_1);
        param_1[0x69] = 0;
      }
    }
    if (0xdb < iVar1) {
      if (iVar1 < 0xf0) {
        if (iVar1 < 0xe0) {
          if (iVar1 == 0xdc) {
LAB_829ad8f8:
            iVar1 = fn_829AD470(param_1);
          }
          else {
            if (iVar1 != 0xdd) goto switchD_829ad960_default;
            iVar1 = fn_829ACD40(param_1);
          }
          goto LAB_829ada6c;
        }
        pcVar2 = *(code **)((iVar1 + -0xd8) * 4 + param_1[0x6f]);
      }
      else {
        if (iVar1 != 0xfe) goto switchD_829ad960_default;
        pcVar2 = *(code **)(param_1[0x6f] + 0x1c);
      }
      iVar1 = (*pcVar2)(param_1);
      goto LAB_829ada6c;
    }
    if (iVar1 == 0xdb) {
      iVar1 = fn_829ACA30(param_1);
      goto LAB_829ada6c;
    }
    switch(iVar1 + -0xd0) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
switchD_829ad960_caseD_0:
      *(undefined4 *)(*param_1 + 0x14) = 0x5c;
      *(int *)(*param_1 + 0x18) = param_1[0x69];
      (**(code **)(*param_1 + 4))(param_1,1);
      param_1[0x69] = 0;
      break;
    case 8:
      iVar1 = fn_829ABDA0(param_1);
      goto LAB_829ada6c;
    case 9:
      *(undefined4 *)(*param_1 + 0x14) = 0x55;
      (**(code **)(*param_1 + 4))(param_1,1);
      param_1[0x69] = 0;
      return 2;
    case 10:
      iVar1 = fn_829AC2D8(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      param_1[0x69] = 0;
      return 1;
    default:
switchD_829ad960_default:
      *(undefined4 *)(*param_1 + 0x14) = 0x44;
      *(int *)(*param_1 + 0x18) = param_1[0x69];
      (**(code **)*param_1)(param_1);
      param_1[0x69] = 0;
    }
  } while( true );
}

