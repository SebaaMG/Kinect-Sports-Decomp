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
extern unsigned int *auStack_20;
extern unsigned int *auStack_24;
extern unsigned int *auStack_28;
extern unsigned int *auStack_2c;
extern int fn_828B62F0();
extern int fn_828B6380();
extern int fn_828B6458();
extern int fn_828B6720();
extern int fn_828B6758();
extern int fn_828B6768();
extern int fn_828B7DC0();
extern int fn_828B8F48();
extern int fn_828B8F90();
extern int fn_828C3D70();
extern int fn_828C4360();


void fn_8251AF48(int param_1)

{
  bool bVar1;
  char cVar6;
  undefined8 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar7;
  int *piStack_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [8];
  
  fn_828C3D70(auStack_2c,*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  cVar6 = fn_828B62F0(auStack_2c);
  if (cVar6 == '\0') {
    if (*(int *)(param_1 + 0x10) != 0) {
      if (*(int *)(param_1 + 0x50) != 2) {
        *(undefined4 *)(param_1 + 0xc) = 5;
        *(undefined4 *)(param_1 + 0x54) = 2;
      }
      goto LAB_8251b098;
    }
LAB_8251b090:
    uVar7 = 4;
  }
  else {
    fn_828C4360(auStack_2c);
    cVar6 = fn_828B6458();
    if (cVar6 == '\0') goto LAB_8251b098;
    if (*(int *)(param_1 + 0x10) == 2) {
      uVar7 = 1;
    }
    else {
      bVar1 = true;
      uVar2 = fn_828C4360(auStack_2c);
      fn_828B6758(&piStack_30,uVar2);
      while( true ) {
        uVar2 = fn_828C4360(auStack_2c);
        puVar5 = (undefined4 *)fn_828B6768(auStack_28,uVar2);
        if (piStack_30 == (int *)*puVar5) break;
        iVar4 = *piStack_30;
        if (*(char *)(iVar4 + 0x9c) == '\0') {
          if (*(char *)(iVar4 + 0x9e) == '\0') {
            bVar1 = false;
            break;
          }
LAB_8251b0bc:
          piStack_30 = piStack_30 + 2;
        }
        else {
          if (*(char *)(iVar4 + 0x9d) == '\0') {
            uVar2 = fn_828C4360(auStack_2c);
            puVar3 = auStack_24;
          }
          else {
            cVar6 = fn_828B8F48();
            if ((cVar6 != '\0') && (cVar6 = fn_828B8F90(*piStack_30), cVar6 != '\0'))
            goto LAB_8251b0bc;
            uVar2 = fn_828C4360(auStack_2c);
            puVar3 = auStack_20;
          }
          puVar5 = (undefined4 *)fn_828B7DC0(puVar3,uVar2,&piStack_30);
          piStack_30 = (int *)*puVar5;
        }
      }
      if (!bVar1) goto LAB_8251b098;
      fn_828C4360(auStack_2c);
      iVar4 = fn_828B6720();
      uVar7 = 5;
      if (iVar4 == 0) goto LAB_8251b090;
    }
  }
  *(undefined4 *)(param_1 + 0x54) = uVar7;
LAB_8251b098:
  fn_828B6380(auStack_2c);
  return;
}

