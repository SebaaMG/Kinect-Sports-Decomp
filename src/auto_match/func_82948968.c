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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_8c;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();
extern int fn_82947448();
extern int fn_8295FD80();
extern int fn_8295FE50();
extern unsigned int uStack_90;


void fn_82948968(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_90;
  undefined4 auStack_8c [3];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  iVar1 = (**(code **)(*param_1 + 0x21c))();
  if ((((-1 < iVar1) && (iVar1 = (**(code **)(*param_1 + 0x22c))(param_1), -1 < iVar1)) &&
      ((param_2 == 0 || (iVar1 = (**(code **)(*param_1 + 0x224))(param_1), -1 < iVar1)))) &&
     ((iVar1 = (**(code **)(*param_1 + 0x234))(param_1,0xffffffff820347fc), -1 < iVar1 &&
      (iVar1 = (**(code **)(*param_1 + 0x148))
                         (param_1,*(undefined4 *)(**(int **)(param_1[0x41] + 8) * 4 + param_1[5]),
                          auStack_8c,&uStack_90), -1 < iVar1)))) {
    fn_82947448(param_1,auStack_8c[0],uStack_90,auStack_60,0x40,0);
    fn_828F6FA8(auStack_80,0x20,auStack_60,0,0);
    iVar1 = (**(code **)(*param_1 + 0x1e8))(param_1,0xffffffff82034404,0xffffffff820347fc);
    if ((-1 < iVar1) &&
       ((iVar1 = fn_82941178(param_1), -1 < iVar1 &&
        (iVar1 = fn_829410A8(param_1,0xffffffff8203587c,auStack_80), -1 < iVar1)))) {
      if (param_2 == 0) {
        iVar1 = fn_829410A8(param_1,0xffffffff82015e28);
      }
      else {
        iVar1 = fn_829410A8(param_1,0xffffffff8203586c,auStack_80);
      }
      if (((-1 < iVar1) &&
          (iVar1 = fn_829410A8(param_1,0xffffffff82035854,auStack_80), -1 < iVar1)) &&
         (iVar1 = (**(code **)(*param_1 + 0x1ec))(param_1), -1 < iVar1)) {
        iVar1 = fn_829410A8(param_1,0xffffffff82035840);
        if (-1 < iVar1) {
          if (param_2 == 0) {
            iVar1 = fn_829410A8(param_1,0xffffffff82034874);
          }
          else {
            iVar1 = fn_829410A8(param_1,0xffffffff8203582c,auStack_80);
          }
          if (((-1 < iVar1) && (iVar1 = fn_82941178(param_1), -1 < iVar1)) &&
             (iVar1 = fn_829410A8(param_1,0xffffffff82034870), -1 < iVar1)) {
            param_1[0x1c5] = param_1[0x1c5] + 1;
            param_1[param_1[0x1c4] + 0x1a4] = 2;
            param_1[0x1c4] = param_1[0x1c4] + 1;
            param_1[0x182] = param_1[0x182] + 1;
            if (param_2 == 0) {
              fn_8295FD80(param_1);
            }
            else {
              fn_8295FE50();
            }
          }
        }
      }
    }
  }
  return;
}

