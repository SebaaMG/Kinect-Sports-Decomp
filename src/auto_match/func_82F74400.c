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
extern int fn_82F72738();
extern int fn_82F72DD0();
extern int fn_82F73228();
extern int fn_82F735D8();
extern int fn_82F73680();
extern int fn_82F73928();
extern int fn_82F73988();
extern int fn_82F76E68();
extern unsigned int *lbl_832635C0;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


undefined8 * fn_82F74400(undefined8 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [56];
  
  *(undefined4 *)param_1 = *param_2;
  *(undefined4 *)((int)param_1 + 4) = param_2[1];
  if (*(char *)((int)param_1 + 4) < '\x02') {
    if (*lbl_832635C0 == '\0') {
      if (*(char *)((int)param_1 + 4) < '\x02') {
        puVar4 = (undefined4 *)fn_82F73988(auStack_38,1,param_1);
        *(undefined4 *)param_1 = *puVar4;
        *(undefined4 *)((int)param_1 + 4) = puVar4[1];
      }
    }
    else {
      fn_82F72738(&uStack_40);
      uStack_50 = uStack_40;
      fn_82F735D8(&uStack_50,0x20);
      uStack_48 = uStack_50;
      fn_82F73228(&uStack_48,param_1);
      *param_1 = uStack_48;
      if ((int)(*(uint *)((int)param_1 + 4) & 0xff000000) < 0x1000001) {
        if (*lbl_832635C0 != '@') {
          fn_82F73680(param_1,0xffffffff82169da4);
          uVar1 = *(uint *)((int)param_1 + 4);
          while ((((int)(uVar1 & 0xff000000) < 0x1000001 && (*lbl_832635C0 != '\0')) &&
                 (*lbl_832635C0 != '@'))) {
            uVar2 = fn_82F76E68(&uStack_50);
            puVar3 = (undefined8 *)fn_82F73928(auStack_38,0x60,uVar2);
            uStack_48 = *puVar3;
            fn_82F735D8(&uStack_48,0x27);
            fn_82F73228(param_1,&uStack_48);
            if (*lbl_832635C0 == '@') {
              lbl_832635C0 = lbl_832635C0 + 1;
            }
            if (((int)(*(uint *)((int)param_1 + 4) & 0xff000000) < 0x1000001) &&
               (*lbl_832635C0 != '@')) {
              fn_82F73680(param_1,0xffffffff82169e28);
            }
            uVar1 = *(uint *)((int)param_1 + 4);
          }
          if ((int)(*(uint *)((int)param_1 + 4) & 0xff000000) < 0x1000001) {
            if (*lbl_832635C0 == '\0') {
              fn_82F72DD0(param_1,1);
            }
            fn_82F735D8(param_1,0x7d);
          }
        }
        if (*lbl_832635C0 == '@') {
          lbl_832635C0 = lbl_832635C0 + 1;
        }
      }
    }
  }
  return param_1;
}

