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
extern unsigned int *auStack_30;
extern int fn_82F73308();
extern int fn_82F735D8();
extern int fn_82F73988();
extern int fn_82F74AF8();
extern int fn_82F771C8();
extern int fn_82F775F0();
extern int fn_82F77EC0();
extern int fn_82F78108();
extern unsigned int *lbl_832635C0;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined4 * fn_82F78540(undefined4 *param_1,ulonglong *param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 uStack_40;
  uint uStack_3c;
  ulonglong uStack_38;
  undefined1 auStack_30 [48];
  
  uStack_3c = uStack_3c & 0xffff;
  uStack_40 = 0;
  cVar2 = *lbl_832635C0;
  pcVar1 = lbl_832635C0;
  if (cVar2 != '\0') {
    if (cVar2 != '$') {
      if (cVar2 != 'A') {
        if (cVar2 != 'B') {
LAB_82f78594:
          fn_82F78108(param_1,param_2);
          return param_1;
        }
        fn_82F73308(&uStack_40,0xffffffff8204ebb8);
        if (*(int *)param_2 != 0) {
          fn_82F735D8(&uStack_40,0x20);
        }
      }
      uVar3 = 0xffffffff8200fcf8;
LAB_82f785d4:
      lbl_832635C0 = lbl_832635C0 + 1;
      uStack_38 = *param_2 | 0x800000;
      fn_82F77EC0(param_1,&uStack_40,&uStack_38,uVar3);
      return param_1;
    }
    if (lbl_832635C0[1] == '$') {
      pcVar1 = lbl_832635C0 + 2;
      cVar2 = *pcVar1;
      if (cVar2 != '\0') {
        if (cVar2 == 'A') {
          lbl_832635C0 = lbl_832635C0 + 3;
          fn_82F771C8(param_1,param_2);
          return param_1;
        }
        if (cVar2 == 'B') {
          lbl_832635C0 = lbl_832635C0 + 3;
          fn_82F74AF8(param_1,param_2,1);
          return param_1;
        }
        if (cVar2 == 'C') {
          lbl_832635C0 = lbl_832635C0 + 3;
          uStack_38 = uStack_38 & 0xffff;
          param_2 = (ulonglong *)
                    fn_82F775F0(auStack_30,param_2,0xffffffff82196582,&uStack_38,0);
          goto LAB_82f78594;
        }
        lbl_832635C0 = pcVar1;
        if (cVar2 != 'E') {
          if (cVar2 != 'F') {
            *(undefined1 *)((int)param_1 + 5) = 0;
            *param_1 = 0;
            *(undefined1 *)(param_1 + 1) = 2;
            return param_1;
          }
          fn_82F73308(&uStack_40,0xffffffff8204ebb8);
          if (*(int *)param_2 != 0) {
            fn_82F735D8(&uStack_40,0x20);
          }
        }
        uVar3 = 0xffffffff82169ad4;
        goto LAB_82f785d4;
      }
    }
    else if (lbl_832635C0[1] != '\0') {
      *(undefined1 *)((int)param_1 + 5) = 0;
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 2;
      return param_1;
    }
  }
  lbl_832635C0 = pcVar1;
  fn_82F73988(param_1,1,param_2);
  return param_1;
}

