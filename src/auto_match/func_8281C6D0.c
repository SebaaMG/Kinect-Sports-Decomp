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
extern unsigned int *auStack_3c;
extern int fn_82814668();
extern int fn_82814728();
extern int fn_82814B70();
extern int fn_82814BF0();
extern int fn_82814C50();
extern int fn_82814E30();
extern int fn_82817160();
extern int fn_8281C540();
extern int fn_8281C5B0();
extern int fn_8281C620();
extern int fn_8281FDF0();
extern int fn_82821728();
extern int fn_828220E0();
extern int fn_82822210();
extern unsigned int iStack_40;


int fn_8281C6D0(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iStack_40;
  undefined4 auStack_3c [15];
  
  if ((param_3 == 0) || (*param_1 != 0)) {
    if (*param_1 != 1) {
      if (*param_1 == 4) {
        param_1[1] = 4;
        (*(code *)param_1[5])(param_1[3],param_1[6],1);
      }
      goto LAB_8281c978;
    }
    *param_1 = 3;
    param_1[1] = 3;
  }
  else {
    *param_1 = 1;
    iStack_40 = param_3;
    auStack_3c[0] = param_2;
    do {
      if (iStack_40 == 0) {
        *param_1 = 0;
      }
      uVar1 = param_1[2];
      if (uVar1 < 8) {
        if (uVar1 == 1) {
          fn_8281C620(param_1,auStack_3c,&iStack_40);
          if (param_1[9] == 0) {
            *(uint *)(param_1[3] + 0x10) = *(uint *)(param_1[3] + 0x10) | 4;
            param_1[2] = 2;
LAB_8281c7c8:
            *param_1 = 1;
          }
        }
        else if (uVar1 == 2) {
          iVar2 = fn_828220E0(param_1[3]);
          if (iVar2 != 0) {
            param_1[1] = 1;
            goto LAB_8281c77c;
          }
          *(uint *)(param_1[3] + 0x10) = *(uint *)(param_1[3] + 0x10) | 8;
          iVar2 = fn_82814E30(param_1[3]);
          if (iVar2 != 0) goto LAB_8281c778;
          param_1[2] = 3;
        }
        else if (uVar1 == 3) {
          iVar2 = fn_8281C540(param_1);
          if (iVar2 == 0) {
            iVar2 = 4;
LAB_8281c838:
            *param_1 = 1;
LAB_8281c83c:
            param_1[2] = iVar2;
          }
          else {
LAB_8281c820:
            fn_8281C620(param_1,auStack_3c,&iStack_40);
          }
        }
        else {
          if (uVar1 == 4) {
            *(uint *)(param_1[3] + 0x10) = *(uint *)(param_1[3] + 0x10) | 0x20;
            fn_82821728(param_1[3],1,0);
            param_1[2] = 5;
            goto LAB_8281c7c8;
          }
          if (uVar1 == 5) {
            *(uint *)(param_1[3] + 0x10) = *(uint *)(param_1[3] + 0x10) | 0x20;
            iVar2 = fn_82814728(param_1[3],1);
            if (iVar2 != 0) {
LAB_8281c778:
              param_1[1] = 2;
              goto LAB_8281c77c;
            }
            iVar2 = 6;
            goto LAB_8281c83c;
          }
          if (uVar1 == 6) {
            iVar2 = fn_8281C5B0(param_1);
            if (iVar2 != 0) goto LAB_8281c820;
            iVar2 = 7;
            goto LAB_8281c838;
          }
          if (uVar1 == 0) {
            iVar2 = fn_82814668(0xffffffff8201eaf4,param_1[5],param_1[6],param_1 + 3,0x2000,1);
            if (iVar2 != 0) goto LAB_8281c778;
            param_1[2] = 1;
          }
          else {
            fn_82814B70(param_1[3]);
            fn_82821728(param_1[3],1,1);
            fn_82814C50(param_1[3]);
            fn_82822210(param_1[3]);
            cVar3 = fn_8281FDF0(param_1[3],0xffffffff8201eafc);
            if (cVar3 == '\0') {
              fn_82814BF0(param_1[3]);
            }
            *(uint *)(param_1[3] + 0x10) = *(uint *)(param_1[3] + 0x10) | 1;
            fn_82817160(param_1[3]);
            *param_1 = 2;
            if ((code *)param_1[5] != (code *)0x0) {
              (*(code *)param_1[5])(param_1[3],param_1[6],0);
            }
          }
        }
      }
      else {
LAB_8281c77c:
        *param_1 = 3;
      }
    } while (*param_1 == 1);
LAB_8281c978:
    if ((*param_1 == 0) || (*param_1 == 2)) goto LAB_8281c990;
  }
  *param_1 = 3;
LAB_8281c990:
  return *param_1;
}

