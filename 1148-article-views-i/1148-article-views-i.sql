# Write your MySQL query statement below
select distinct(author_id) as id from Views v where author_id in (select viewer_id from Views v where v.author_id = v.viewer_id) order by 1 asc;